/***************************************************************************
*
*  $MCD M�dulo de defini��o: M�dulo Dado
*
*  Arquivo gerado:              Dado.H
*  Letras identificadoras:      DAD
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores:	fvc - Felipe Vieira C�rtes
*			tbm - T�ssio Borges de Miranda
*			db  - Daniela Braz�o
*
*  $HA Hist�rico de evolu��o:
*     Vers�o  Autor    Data     Observa��es
*       1.00   fvc   15/08/2001 In�cio e t�rmino do desenvolvimento
*
*  $ED Descri��o do m�dulo
*     Este m�dulo implementa um conjunto simples de fun��es para gerar o resultado
*	  do dado "lan�ado".
*
***************************************************************************/
 
#if defined( DADO_OWN )
   #define DADO_EXT
#else
   #define DADO_EXT extern
#endif

/***********************************************************************
*
*  $TC Tipo de dados: DAD Condicoes de retorno
*
*
***********************************************************************/

   typedef enum {

         DAD_CondRetOK = 0 ,
               /* Executou correto */

         DAD_CondRetErro = 1 ,
               /* Estrutura do DadoPontos est� errada */

         DAD_CondRetMatrizNaoExiste = 2 ,
               /* DadoPontos n�o existe */

         DAD_CondRetFaltouMemoria = 3
               /* Faltou mem�ria ao alocar dados */

   } DAD_tpCondRet ;

/***********************************************************************
*
*  $FC Fun��o: DAD  &Gerar o numero de casas a serem puladas
*
*  $ED Descri��o da fun��o
*	  Retorno o numero da casas a serem andadas
*  $FV Valor retonado
*     DAD_CondRetOK
*     DAD_CondRetFaltouMemoria
***********************************************************************/

DAD_tpCondRet DAD_NumPular(int *NumeroCasas) ;

#undef DADO_EXT

/*************** Fim do m�dulo de defini��o: M�dulo Dado ****************/
