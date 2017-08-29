CREATE DATABASE IF NOT EXISTS exercicio1;

USE exercicio1;

CREATE TABLE IF NOT EXISTS TipoTelefone (
codigoTipo INTEGER not null,
descricaoTipo VARCHAR(12) not null,
CONSTRAINT TipoTelefone_PK PRIMARY KEY (codigoTipo)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS TipoEndereco (
codigoTipoEndereco INTEGER not null,
descricaoTipoEndereco VARCHAR(100) not null,
CONSTRAINT TipoEndereco_PK PRIMARY KEY (codigoTipoEndereco)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Endereco (
codigoEndereco INTEGER not null,
codigoBairro INTEGER not null,
codigoTipoEndereco INTEGER not null,
CONSTRAINT Endereco_PK PRIMARY KEY (codigoEndereco),
CONSTRAINT Endereco_TipoEndereco_FK FOREIGN KEY(codigoTipoEndereco) REFERENCES TipoEndereco (codigoTipoEndereco)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS UF (
codigoUF INTEGER not null,
nomeUF VARCHAR(60) not null,
CONSTRAINT UF_PK PRIMARY KEY (codigoUF)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Cidade (
codigoCidade INTEGER not null,
ddd NUMERIC(3) not null,
nomeCidade VARCHAR(60) not null,
sigla VARCHAR(3) not null,
codigoUF INTEGER,
CONSTRAINT Cidade_PK PRIMARY KEY (codigoCidade),
CONSTRAINT Cidade_UF_FK FOREIGN KEY (codigoUF) REFERENCES UF (codigoUF)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Bairro (
codigoBairro INTEGER not null,
nomeBairro VARCHAR(60) not null,
codigoCidade INTEGER not null,
CONSTRAINT Bairro_PK PRIMARY KEY (codigoBairro),
CONSTRAINT Bairro_Cidade_FK FOREIGN KEY(codigoCidade) REFERENCES Cidade (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Pais (
sigla VARCHAR(3) not null,
nomePais VARCHAR(50) not null,
ddi NUMERIC(3) not null,
CONSTRAINT Pais_PK PRIMARY KEY (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Copa (
ano INTEGER not null,
dataInicio DATE not null,
dataFim DATE not null,
codigoCidadeAbertura INTEGER not null,
codigoCidadeEncerramento INTEGER not null,
CONSTRAINT Copa_PK PRIMARY KEY (ano),
CONSTRAINT Copa_Cidade_Abertura_FK FOREIGN KEY (codigoCidadeAbertura) REFERENCES Cidade (codigoCidade),
CONSTRAINT Copa_Cidade_Encerramento_FK FOREIGN KEY (codigoCidadeEncerramento) REFERENCES Cidade (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS sedia (
ano INTEGER not null,
sigla VARCHAR(3) not null,
CONSTRAINT sedia_Copa_FK FOREIGN KEY(ano) REFERENCES Copa (ano),
CONSTRAINT sedia_Pais_FK FOREIGN KEY(sigla) REFERENCES Pais (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS participa (
ano INTEGER not null,
sigla VARCHAR(3) not null,
CONSTRAINT participa_Copa_FK FOREIGN KEY(ano) REFERENCES Copa (ano),
CONSTRAINT participa_Pais_FK FOREIGN KEY(sigla) REFERENCES Pais (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Estadio (
codigoEstadio INTEGER not null,
nomeEstadio VARCHAR(50) not null,
capacidadeTotal BIGINT(10) not null,
codigoCidade INTEGER not null,
CONSTRAINT Estadio_PK PRIMARY KEY (codigoEstadio),
CONSTRAINT Estadio_Cidade_FK FOREIGN KEY (codigoCidade) REFERENCES Cidade (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Jogo (
codigoCidade INTEGER not null,
dataHora DATETIME not null,
codigoJogo INTEGER not null,
ano INTEGER not null,
CONSTRAINT Jogo_PK PRIMARY KEY (codigoJogo),
CONSTRAINT Jogo_Copa_FK FOREIGN KEY(ano) REFERENCES Copa (ano),
CONSTRAINT Jogo_Cidade_FK FOREIGN KEY(codigoCidade) REFERENCES Cidade (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS joga (
numeroGols INTEGER not null,
sigla VARCHAR(3) not null,
codigoJogo INTEGER not null,
CONSTRAINT joga_Jogo_FK FOREIGN KEY(codigoJogo) REFERENCES Jogo (codigoJogo),
CONSTRAINT joga_Pais_FK FOREIGN KEY(sigla) REFERENCES Pais (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Filiacao (
nomeMae VARCHAR(50),
nomePai VARCHAR(50),
codigoFiliacao INTEGER not null,
CONSTRAINT Filiacao_PK PRIMARY KEY (codigoFiliacao)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Sexo (
codigoSexo INTEGER not null,
descricaoSexo VARCHAR(10) not null,
CONSTRAINT Sexo_PK PRIMARY KEY (codigoSexo)
);

CREATE TABLE IF NOT EXISTS Pessoa (
nome VARCHAR(50) not null,
codigoPessoa INTEGER not null,
dataNascimento DATETIME not null,
cpf NUMERIC(11) not null,
codigoFiliacao INTEGER,
codigoCidade INTEGER not null,
codigoSexo INTEGER not null,
CONSTRAINT Pessoa_PK PRIMARY KEY (codigoPessoa),
CONSTRAINT Pessoa_Cidade_FK FOREIGN KEY(codigoCidade) REFERENCES Cidade (codigoCidade),
CONSTRAINT Pessoa_Filiacao_FK FOREIGN KEY(codigoFiliacao) REFERENCES Filiacao (codigoFiliacao),
CONSTRAINT Pessoa_Sexo_FK FOREIGN KEY(codigoSexo) REFERENCES Sexo (codigoSexo)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Treinador (
codigoTreinador VARCHAR(10) not null,
codigoPessoa INTEGER not null,
CONSTRAINT Treinador_PK PRIMARY KEY(codigoTreinador),
CONSTRAINT Treinador_PESSOA_FK FOREIGN KEY(codigoPessoa) REFERENCES Pessoa (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Jogador (
codigoJogador INTEGER not null,
codigoPessoa INTEGER not null,
CONSTRAINT Jogador_PK PRIMARY KEY (codigoJogador),
CONSTRAINT Jogador_Pessoa_FK FOREIGN KEY(codigoPessoa) REFERENCES Pessoa (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Reporter (
codigoReporter VARCHAR(10) not null,
senha VARCHAR(16) not null,
login VARCHAR(256) not null,
codigoPessoa INTEGER not null,
CONSTRAINT Reporter_PK PRIMARY KEY (codigoReporter),
CONSTRAINT Reporter_Pessoa_FK FOREIGN KEY (codigoPessoa) REFERENCES Pessoa (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Telefone (
idTelefone INTEGER not null,
numeroTelefone NUMERIC(9) not null,
codigoTipo INTEGER not null,
codigoPessoa INTEGER not null,
codigoCidade INTEGER not null,
CONSTRAINT Telefone_PK PRIMARY KEY (idTelefone),
CONSTRAINT Telefone_TipoTelefone_FK FOREIGN KEY(codigoTipo) REFERENCES TipoTelefone (codigoTipo),
CONSTRAINT Telefone_Pessoa_FK FOREIGN KEY (codigoPessoa) REFERENCES Pessoa (codigoPessoa),
CONSTRAINT Telefone_Cidade_FK FOREIGN KEY (codigoCidade) REFERENCES Cidade (codigoCidade)
)Engine = InnoDB;

CREATE TABLE Delegacao (
codigoDelegacao INTEGER not null,
sigla VARCHAR(3) not null,
CONSTRAINT Delegacao_PK PRIMARY KEY (codigoDelegacao),
CONSTRAINT Delegacao_Pais_FK FOREIGN KEY (sigla) REFERENCES Pais (sigla)
)Engine = InnoDB;

CREATE TABLE integra (
codigoDelegacao INTEGER not null,
codigoPessoa INTEGER not null,
CONSTRAINT integra_Delegacao_FK FOREIGN KEY (codigoDelegacao) REFERENCES Delegacao (codigoDelegacao),
CONSTRAINT integra_Pessoa_FK FOREIGN KEY (codigoPessoa) REFERENCES Pessoa (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE Participante (
codigoParticipante INTEGER not null,
codigoJogo INTEGER not null,
codigoDelegacao INTEGER not null,
numeroGols INTEGER not null,
codigoPessoa INTEGER not null,
CONSTRAINT Participante_PK PRIMARY KEY (codigoParticipante),
CONSTRAINT Participante_Jogo_FK FOREIGN KEY (codigoJogo) REFERENCES Jogo (codigoJogo),
CONSTRAINT Participante_Pessoa_FK FOREIGN KEY(codigoPessoa) REFERENCES Pessoa (codigoPessoa),
CONSTRAINT Participante_Delegacao_FK FOREIGN KEY (codigoDelegacao) REFERENCES Delegacao (codigoDelegacao)
)Engine = InnoDB;