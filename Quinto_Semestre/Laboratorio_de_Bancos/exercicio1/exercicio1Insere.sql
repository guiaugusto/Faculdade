USE exercicio1;

-- Inserindo dados na tabela TIPOTELEFONE (codigoTipo, descricaoTipo)

INSERT INTO TIPOTELEFONE VALUES (1, 'Movel'),(2, 'Fixo');

-- Inserindo dados na tabela TIPOENDERECO (codigoTipoEndereco, descricaoTipoEndereco)

INSERT INTO TIPOENDERECO VALUES (1, 'Residencial'),(2, 'Comercial'),(3, 'Fiscal');

-- Inserindo dados na tabela ENDERECO (codigoEndereco, codigoBairro, codigoTipoEndereco)

INSERT INTO ENDERECO VALUES (1,1,1),(2,2,1),(3,5,1),(4,6,3);

-- Inserindo dados na tabela UF (codigoUF, nomeUF)

INSERT INTO UF VALUES (1, 'Rio de Janeiro'),(2, 'São Paulo'),(3, 'Santa Catarina'),(4, 'Parana');

-- Inserindo dados na tabela CIDADE (codigoCidade, ddd, nomeCidade, sigla, codigoUF)

INSERT INTO CIDADE (codigoCidade, ddd, nomeCidade, sigla) VALUES 
(1,'002','Montevideu','URU'),
(2,'079','Roma','ITA'),
(3,'001','Paris','FRA');

INSERT INTO CIDADE VALUES
(4,'021','Rio de Janeiro','BRA', 1),(5,'011','São Paulo','BRA', 2);
	
-- Inserindo dados na tabela BAIRRO (codigoBairro, nomeBairro, codigoCidade)

INSERT INTO BAIRRO VALUES (1, 'Leblon', 4),(2, 'Ipanema', 4),(3, 'Copacabana',4 ),
(4, 'Liberdade', 5),(5, 'Iguatemi', 5),(6, 'Ipiranga', 5),(7, 'Parque Batlle', 1),(8, 'Pocitos', 1);

-- Inserindo dados na tabela PAIS (sigla, nomePais, ddi)

INSERT INTO PAIS VALUES

('RSA','Africa do Sul','027'),('ALG','Argelia','213'),('CMR','Camaroes','237'), 
('CGO','Congo','242'),('EGY','Egito','020'),('MAR','Marrocos','212'), 
('NIG','Nigeria','234'),('SEN','Senegal','221'),('TUN','Tunisia','216'),

('ARG', 'Argentina', '054'),('BRA','Brasil','055'),
('BOL','Bolivia','591'),('CAN','Canada','001'),
('CHI','Chile','056'),('COL','Colombia','057'),
('CRC','Costa Rica','506'),('CUB','Cuba','053'),
('ESA','El Salvador','503'),('ECU','Equador','593'),
('USA','Estados Unidos','001'),('HAI','Haiti','509'),
('HON','Honduras','504'),('JAM','Jamaica','001'),
('MEX','Mexico','052'),('PAR','Paraguai','595'),
('PER','Peru','051'),('URU','Uruguai','598'),

('KSA','Arabia Saudita','966'),('CHN','China','086'),
('PRK','Coreia do Norte','850'),('KOR','Coreia do Sul','082'),
('UAE','Emirados Arabes Unidos','971'),('INA','Indias Holandesas','062'),
('IRI','Ira','098'),('IRQ','Iraque','964'),('ISR','Israel','972'),
('JPN','Japao','081'),('KUW','Kuwait','965'),

('GER','Alemanha','049'), ('RDA','Alemanha Oriental','037'), ('AUT','Austria','043'),
('BEL','Belgica','032'), ('BUL','Bulgaria','359'), ('CZE','Checoslovaquia','042'),
('CRO','Croacia','385'), ('DEN','Dinamarca','045'), ('ESC','Escocia','044'),
('ESL','Eslovenia','386'), ('ESP','Espanha','034'), ('FRA','França','033'),
('GRE','Grecia','030'), ('NED','Holanda','031'), ('HUN','Hungria','036'),
('ING','Inglaterra','044'), ('IRL','Irlanda','353'), ('IRN','Irlanda do Norte','044'),
('ITA','Italia','039'), ('YUG','Iugoslavia','038'), ('NOR','Noruega','047'),
('PGL','Pais de Gales','044'), ('POL','Polonia','048'), ('POR','Portugal','351'),
('ROM','Romenia','040'), ('RUS','Russia','007'), ('SWE','Suecia','046'),
('SWI','Suiça','041'), ('TUR','Turquia','090'), ('URS','URSS','007'),
	
('AUS','Australia','061'),
('NZL','Nova Zelandia','064');

-- Inserindo dados na tabela COPA (ano, dataInicio, dataFim, codigoCidadeAbertura, codigoCidadeEncerramento)

INSERT INTO COPA VALUES (1930, '1930-07-13', '1930-07-30', 1, 1),(1934, '1934-05-27', '1934-06-10', 2, 2),
(1938, '1938-06-04', '1938-06-19', 3, 3),(1950, '1950-06-24', '1950-07-16', 4, 5);

-- Inserindo dados na tabela sedia (ano, sigla)

INSERT INTO sedia VALUES (1930, 'URU'),(1934, 'ITA'),(1938, 'FRA'),(1950, 'BRA');

-- Inserindo dados na tabela participa (ano, sigla)

INSERT INTO participa VALUES 
(1930, 'ARG'),(1930, 'BEL'),(1930, 'BOL'),(1930, 'BRA'),(1930, 'CHI'),(1930, 'USA'),(1930, 'FRA'),(1930, 'YUG'),(1930, 'MEX'),(1930, 'PAR'),
(1930, 'PER'),(1930, 'ROM'),(1930, 'URU');

-- Inserindo dados na tabela Estadio (codigoEstadio, nomeEstadio, capacidadeTotal, codigoCidade)

INSERT INTO Estadio VALUES (1, 'Estadio Pocitos', 100000, 1),
 (2, 'Estadio Parque Central', 200000, 1), (3, 'Estadio Centenario', 250000, 1);

-- Inserindo dados na tabela JOGO (nomeEstadio, dataHora, codigoJogo, ano, codigoCidade)

INSERT INTO JOGO VALUES (1,'1930-07-13 15:00:00.000',1, 1930),(2,'1930-07-15 16:00:00.000',2, 1930),
(2,'1930-07-16 14:45:00.000',3, 1930), (3,'1930-07-19 12:50:00.000',4, 1930),
(3,'1930-07-19 15:00:00.000',5, 1930),(3,'1930-07-22 14:45:00.000',6, 1930),
(2,'1930-07-14 12:45:00.000',7, 1930),(2,'1930-07-17 12:45:00.000',8, 1930),
(3,'1930-07-20 13:00:00.000',9, 1930),(1,'1930-07-14 14:50:00.000',10, 1930),
(3,'1930-07-18 14:30:00.000',11, 1930),(3,'1930-07-21 14:50:00.000',12, 1930),
(2,'1930-07-13 15:00:00.000',13, 1930),(2,'1930-07-17 14:45:00.000',14, 1930),
(3,'1930-07-20 15:00:00.000',15, 1930),(3,'1930-07-26 14:45:00.000',16, 1930),
(3,'1930-07-27 14:45:00.000',17, 1930),(3,'1930-07-30 15:30:00.000',18, 1930);

-- Inserindo dados na tabela joga (numeroGols, sigla, codigoJogo)

INSERT INTO joga VALUES (4, 'FRA', 1),(1, 'MEX', 1),
(1, 'ARG',2),(0, 'FRA',2),(3, 'CHI',3),(0, 'MEX',3),(1, 'CHI',4),(0, 'FRA',4),(6, 'ARG',5),(3, 'MEX',5),
(3, 'ARG',6),(1, 'CHI',6),(2, 'YUG',7),(1, 'BRA',7),(4, 'YUG',8),(0, 'BOL',8),(4, 'BRA',9),(0, 'BOL',9),
(3, 'ROM',10),(1, 'PER',10),(1, 'URU',11),(0, 'PER',11),(4, 'URU',12),(0, 'ROM',12),(3, 'USA',13),(0, 'BEL',13),
(3, 'USA',14),(0, 'PAR',14),(1, 'PAR',15),(0, 'BEL',15),(6, 'ARG',16),(1, 'USA',16),(6, 'URU',17),(1, 'YUG',17),
(4, 'URU',18),(2, 'ARG',18);

-- Inserindo dados na tabela FILIACAO (nomeMae, nomePai, codigoFiliacao)

INSERT INTO FILIACAO VALUES ('Maria','Antonio',1),('Luzia','Jose',2),('Maria','Jose',3);

-- Inserindo dados na tabela Sexo (codigoSexo, descricaoSexo)

INSERT INTO Sexo VALUES (1, 'Masculino'),(2, 'Feminino');

-- Inserindo dados na tabela PESSOA (nome, codigoPessoa, dataNascimento, sexo, cpf, codigoFiliacao, codigoCidade)

INSERT INTO PESSOA (nome, codigoPessoa, dataNascimento, cpf, codigoCidade) VALUES 
('Pindaro de Carvalho',4,'1892-06-01','64859637232',4,1),('Joel',5,'1904-05-01','86161451255',5,1),
('Velloso',6,'1908-09-25','58275754968',4,1),('Brilhante',7,'1904-11-05','89465373613',5,1),
('Italia',8,'1907-05-22','19058527204',4,1),('Oscarino',9,'1907-01-17','71620456850',5,1),
('Ze Luiz',10,'1903-05-24','75007837288',4,1),('Benevenuto',11,'1903-08-08','81036728234',5,1),
('Fausto',12,'1905-01-28','54049323680',4,1),('Fernando',13,'1906-03-01','31353754634',5,1),
('Fortes',14,'1901-09-09','33202771892',4,1),('Hermógenes',15,'1908-11-01','66476457306',5,1),
('Ivan Mariz',16,'1910-05-16','79122268693',4,1),('Pamplona',17,'1902-07-14','77487688623',5,1),
('Carvalho Leite',18,'1912-06-25','56263459220',4,1),('Doca',19,'1903-04-07','26591543171',5,1),
('Manoelzinho',20,'1907-08-22','31732473293',4,1),('Moderato',21,'1902-07-14','53026283339',5,1),
('Nilo',22,'1903-04-03','75164354810',4,1),('Poly',23,'1909-01-26','17441320038',5,1),
('Preguinho',24,'1905-03-02','07397963218',4,1),('Russinho',25,'1902-12-12','26560371310',5,1),
('Teophilo',26,'1900-04-11','81644693275',4,1);

INSERT INTO PESSOA VALUES
('William Waack', 1, '1952-08-30', '00000000000', 1, 4, 1),
('Cristiane Dias', 2, '1980-10-09', '11111111111', 2, 5, 2),
('Guilherme Augusto', 3, '1997-05-12', '22222222222', 3, 4, 1);

-- Inserindo dados na tabela Treinador (codigoTreinador, codigoPessoa)

INSERT INTO Treinador VALUES (1, 4);

-- Inserindo dados na tabela Jogador (codigoJogador, codigoPessoa)

INSERT INTO Jogador VALUES (1, 5),(2, 6),(3, 7),(4, 8),(5, 9),(6, 10),(7, 11),(8, 12),(9, 13),(10, 14),(11, 15),
(12, 16),(13, 17),(14, 18),(15, 19),(16, 20),(17, 21),(18, 22),(19, 23),(20, 24),(21, 25),(22, 26);

-- Inserindo dados na tabela Reporter (codigoReporter, senha, login, codigoPessoa)

INSERT INTO Reporter VALUES (1, 'Willi-W', 'Willi-Waack', 1),(2, 'MCD3131', 'CrisD', 2),(3, 'Guigui', 'Guigui-10', 3);

-- Inserindo dados na tabela Delegacao (codigoDelegacao, sigla)

INSERT INTO Delegacao VALUES (1, 'ARG'),(2, 'BEL'),(3, 'BOL'),(4, 'BRA'),(5, 'CHI'),(6, 'USA'),
(7, 'FRA'),(8, 'YUG'),(9, 'MEX'),(10, 'PAR'),(11, 'PER'),(12, 'ROM'),(13, 'URU');

-- Inserindo dados na tabela integra (codigoDelegacao, codigoPessoa)

INSERT INTO integra VALUES (4, 4),(4, 5),(4, 6),(4, 7),(4, 8),(4, 9),(4, 10),(4, 11),(4, 12),(4, 13),
(4, 14),(4, 15),(4, 16),(4, 17),(4, 18),(4, 19),(4, 20),(4, 21),(4, 22),(4, 23),(4, 24),(4, 25),(4, 26);

-- Inserindo dados na tabela Participante (codigoJogo, codigoDelegacao, numeroGols, codigoTime, codigoPessoa)

INSERT INTO Participante VALUES (1, 9, 4, 0, 5),(2, 9, 4, 0, 6),(3, 9, 4, 0, 7),(4, 9, 4, 0, 8),(5, 9, 4, 0, 9),
(6, 9, 4, 0, 10),(7, 9, 4, 0, 11),(8, 9, 4, 0, 12),(9, 9, 4, 0, 13),(10, 9, 4, 2, 24),(11, 9, 4, 2, 21);