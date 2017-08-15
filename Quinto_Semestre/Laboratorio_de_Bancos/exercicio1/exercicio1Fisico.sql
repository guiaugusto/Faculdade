CREATE DATABASE IF NOT EXISTS exercicio1;

USE exercicio1;

CREATE TABLE IF NOT EXISTS TIPOTELEFONE (
codigoTipo INTEGER not null,
descricaoTipo VARCHAR(12) not null,
CONSTRAINT TIPOTELEFONE_PK PRIMARY KEY (codigoTipo)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS TIPOENDERECO (
codigoTipoEndereco INTEGER not null,
descricaoTipoEndereco VARCHAR(100) not null,
CONSTRAINT TIPOENDERECO_PK PRIMARY KEY (codigoTipoEndereco)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS ENDERECO (
codigoEndereco INTEGER not null,
codigoBairro INTEGER not null,
codigoTipoEndereco INTEGER not null,
CONSTRAINT ENDERECO_PK PRIMARY KEY (codigoEndereco),
CONSTRAINT ENDERECO_TIPOENDERECO_FK FOREIGN KEY(codigoTipoEndereco) REFERENCES TIPOENDERECO (codigoTipoEndereco)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS UF (
codigoUF INTEGER not null,
nomeUF VARCHAR(60) not null,
CONSTRAINT UF_PK PRIMARY KEY (codigoUF)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS CIDADE (
codigoCidade INTEGER not null,
ddd NUMERIC(3) not null,
nomeCidade VARCHAR(60) not null,
sigla VARCHAR(3) not null,
codigoUF INTEGER,
CONSTRAINT CIDADE_PK PRIMARY KEY (codigoCidade),
CONSTRAINT CIDADE_UF_FK FOREIGN KEY (codigoUF) REFERENCES UF (codigoUF)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS BAIRRO (
codigoBairro INTEGER not null,
nomeBairro VARCHAR(60) not null,
codigoCidade INTEGER not null,
CONSTRAINT BAIRRO_PK PRIMARY KEY (codigoBairro),
CONSTRAINT BAIRRO_CIDADE_FK FOREIGN KEY(codigoCidade) REFERENCES CIDADE (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS PAIS (
sigla VARCHAR(3) not null,
nomePais VARCHAR(50) not null,
ddi NUMERIC(3) not null,
CONSTRAINT PAIS_PK PRIMARY KEY (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS COPA (
ano INTEGER not null,
dataInicio DATE not null,
dataFim DATE not null,
codigoCidadeAbertura INTEGER not null,
codigoCidadeEncerramento INTEGER not null,
CONSTRAINT COPA_PK PRIMARY KEY (ano),
CONSTRAINT COPA_CIDADE_ABERTURA_FK FOREIGN KEY (codigoCidadeAbertura) REFERENCES CIDADE (codigoCidade),
CONSTRAINT COPA_CIDADE_ENCERRAMENTO_FK FOREIGN KEY (codigoCidadeEncerramento) REFERENCES CIDADE (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS sedia (
ano INTEGER not null,
sigla VARCHAR(3) not null,
CONSTRAINT sedia_COPA_FK FOREIGN KEY(ano) REFERENCES COPA (ano),
CONSTRAINT sedia_PAIS_FK FOREIGN KEY(sigla) REFERENCES PAIS (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS participa (
ano INTEGER not null,
sigla VARCHAR(3) not null,
CONSTRAINT participa_COPA_FK FOREIGN KEY(ano) REFERENCES COPA (ano),
CONSTRAINT participa_PAIS_FK FOREIGN KEY(sigla) REFERENCES PAIS (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS JOGO (
nomeEstadio VARCHAR(50) not null,
dataHora DATETIME not null,
codigoJogo INTEGER not null,
ano INTEGER not null,
codigoCidade INTEGER not null,
CONSTRAINT JOGO_PK PRIMARY KEY (codigoJogo),
CONSTRAINT JOGO_COPA_FK FOREIGN KEY(ano) REFERENCES COPA (ano),
CONSTRAINT JOGO_CIDADE_FK FOREIGN KEY(codigoCidade) REFERENCES CIDADE (codigoCidade)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS joga (
numeroGols INTEGER not null,
sigla VARCHAR(3) not null,
codigoJogo INTEGER not null,
CONSTRAINT joga_JOGO_FK FOREIGN KEY(codigoJogo) REFERENCES JOGO (codigoJogo),
CONSTRAINT joga_PAIS_FK FOREIGN KEY(sigla) REFERENCES PAIS (sigla)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS FILIACAO (
nomeMae VARCHAR(50),
nomePai VARCHAR(50),
codigoFiliacao INTEGER not null,
CONSTRAINT FILIACAO_PK PRIMARY KEY (codigoFiliacao)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS PESSOA (
nome VARCHAR(50) not null,
codigoPessoa INTEGER not null,
dataNascimento DATETIME not null,
sexo VARCHAR(10) not null,
cpf NUMERIC(11) not null,
codigoFiliacao INTEGER,
codigoCidade INTEGER not null,
CONSTRAINT PESSOA_PK PRIMARY KEY (codigoPessoa),
CONSTRAINT PESSOA_CIDADE_FK FOREIGN KEY(codigoCidade) REFERENCES CIDADE (codigoCidade),
CONSTRAINT PESSOA_FILIACAO_FK FOREIGN KEY(codigoFiliacao) REFERENCES FILIACAO (codigoFiliacao)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Treinador (
codigoTreinador VARCHAR(10) not null,
codigoPessoa INTEGER not null,
CONSTRAINT Treinador_PK PRIMARY KEY(codigoTreinador),
CONSTRAINT Treinador_PESSOA_FK FOREIGN KEY(codigoPessoa) REFERENCES PESSOA (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Jogador (
codigoJogador INTEGER not null,
codigoPessoa INTEGER not null,
CONSTRAINT Jogador_PK PRIMARY KEY (codigoJogador),
CONSTRAINT Jogador_PESSOA_FK FOREIGN KEY(codigoPessoa) REFERENCES PESSOA (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS Reporter (
codigoReporter VARCHAR(10) not null,
senha VARCHAR(16) not null,
login VARCHAR(256) not null,
codigoPessoa INTEGER not null,
CONSTRAINT Reporter_PK PRIMARY KEY (codigoReporter),
CONSTRAINT Reporter_PESSOA_FK FOREIGN KEY (codigoPessoa) REFERENCES PESSOA (codigoPessoa)
)Engine = InnoDB;

CREATE TABLE IF NOT EXISTS TELEFONE (
idTelefone INTEGER not null,
numeroTelefone NUMERIC(9) not null,
codigoTipo INTEGER not null,
codigoPessoa INTEGER not null,
codigoCidade INTEGER not null,
CONSTRAINT TELEFONE_PK PRIMARY KEY (idTelefone),
CONSTRAINT TELEFONE_TIPOTELEFONE_FK FOREIGN KEY(codigoTipo) REFERENCES TIPOTELEFONE (codigoTipo),
CONSTRAINT TELEFONE_PESSOA_FK FOREIGN KEY (codigoPessoa) REFERENCES PESSOA (codigoPessoa),
CONSTRAINT TELEFONE_CIDADE_FK FOREIGN KEY (codigoCidade) REFERENCES CIDADE (codigoCidade)
)Engine = InnoDB;