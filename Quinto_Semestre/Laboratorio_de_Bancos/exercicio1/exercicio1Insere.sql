USE exercicio1;

-- Inserindo dados na tabela TIPOTELEFONE (codigoTipo, descricaoTipo)

INSERT INTO TIPOTELEFONE VALUES (1, 'Telefonia movel'),(2, 'Telefonia Fixa');

-- Inserindo dados na tabela TIPOENDERECO (codigoTipoEndereco, descricaoTipoEndereco)

INSERT INTO TIPOENDERECO VALUES (1, 'Residencial'),(2, 'Comercial'),(3, 'Fiscal');

-- Inserindo dados na tabela ENDERECO (codigoEndereco, codigoBairro, codigoTipoEndereco)

INSERT INTO ENDERECO VALUES (),(),();

-- Inserindo dados na tabela UF (codigoUF, nomeUF)

INSERT INTO UF VALUES (),(),();

-- Inserindo dados na tabela CIDADE (codigoCidade, ddd, nomeCidade, sigla, codigoUF)

INSERT INTO CIDADE VALUES (),(),();

-- Inserindo dados na tabela BAIRRO (codigoBairro, nomeBairro, codigoCidade)

INSERT INTO BAIRRO VALUES (),(),();

-- Inserindo dados na tabela PAIS (sigla, nomePais, ddi)

INSERT INTO PAIS VALUES ('ARG', 'Argentina', '54'),('BEL','Belgica','32'),('BOL','Bolivia','591'),('BRA','Brasil','55'),
('CHI','Chile','56'),('USA','Estados Unidos','1'),('FRA','França','33'),('YUG','Iugoslavia','38'),('MEX','Mexico','52'),
('PAR','Paraguai','595'),('PER','Peru','51'),('ROM','Romênia','40'),('URU','Uruguai','598');

-- Inserindo dados na tabela COPA (ano, dataInicio, dataFim, cidadeAbertura, cidadeEncerramento)

INSERT INTO COPA VALUES (1930, '13/07', '30/07', 'Montevideu', 'Montevideu'),
(1934, '27/05', '10/06', 'Roma', 'Roma'),
(1938, '04/06', '19/06', 'Paris', 'Paris');

-- Inserindo dados na tabela sedia (ano, sigla)

INSERT INTO sedia VALUES (),(),();

-- Inserindo dados na tabela participa (ano, sigla)

INSERT INTO participa VALUES (),(),();

-- Inserindo dados na tabela JOGO (nomeEstadio, dataHora, codigoJogo, ano, codigoCidade)

INSERT INTO JOGO VALUES (),(),();

-- Inserindo dados na tabela joga (numeroGols, sigla, codigoJogo)

INSERT INTO joga VALUES (),(),();

-- Inserindo dados na tabela FILIACAO (nomeMae, nomePai, codigoFiliacao)

INSERT INTO FILIACAO VALUES (),(),();

-- Inserindo dados na tabela PESSOA (nome, codigoPessoa, dataNascimento, sexo, cpf, codigoFiliacao, codigoCidade)

INSERT INTO PESSOA VALUES (),(),();

-- Inserindo dados na tabela Treinador (codigoTreinador, codigoPessoa)

INSERT INTO Treinador VALUES (),(),();

-- Inserindo dados na tabela Jogador (codigoJogador, codigoPessoa)

INSERT INTO Jogador VALUES (),(),();

-- Inserindo dados na tabela Reporter (codigoReporter, senha, login, codigoPessoa)

INSERT INTO Reporter VALUES (),(),();
