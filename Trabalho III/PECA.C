/***************************************************************************
*  $MCI M�dulo de implementa��o: PEC Estrutura Peca
*
*  Arquivo gerado:              PECA.C
*  Letras identificadoras:      PEC
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores: fvc - Felipe Vieira C�rtes
*			tbm - T�ssio Borges de Miranda
*			db  - Daniela Braz�o
*
*  $HA Hist�rico de evolu��o:
*     Vers�o  Autor    Data     Observa��es
*	  1.0     tbm   14/set/2015	In�cio do desenvolvimento
*
***************************************************************************/


#include   <stdio.h>
#include   <string.h>
#include   <malloc.h>

#define PECA_OWN
#include "PECA.h"
#undef PECA_OWN

/***********************************************************************
*
*  $TC Tipo de dados: PECPnt Descritor do dados de ponto.
*
*  $ED Descri��o do tipo
*		Descreve a estrutura de pe�a
***********************************************************************/

typedef struct tgPeca{
	char cor;
} tpPeca;


/*****  Dados encapsulados no m�dulo  *****/

// vazio

/*****  C�digo das fun��es exportadas pelo m�dulo  *****/

/***************************************************************************
*
*  Fun��o: Pec Criar Pe�a
*  ****/

Pec_tpCondRet Pec_CriarPeca(tppPeca * PecCriado, char CorDaNovaPeca)
{
	*PecCriado= (tppPeca)malloc(sizeof(struct tgPeca));

	if(PecCriado == NULL)
		return Pec_CondRetFaltouMemoria;

	(*PecCriado)->cor = CorDaNovaPeca;

	return Pec_CondRetOK;
}

/***************************************************************************
*
*  Fun��o: PEC Destruir Pe�a
*  ****/

Pec_tpCondRet Pec_DestruirPeca(tppPeca  Peca)
{

	free(Peca);
	return Pec_CondRetOK;
}

/***************************************************************************
*
*  Fun��o: PEC Obter Cor
*  ****/

Pec_tpCondRet Pec_ObterCor(tppPeca  Peca, char *cor)
{
	if((Peca->cor != 'b') && (Peca->cor != 'p'))
	{
		printf("Cor obtida estah errada \n");
		return Pec_CondRetErro;
	}
	*cor = Peca->cor;
	return Pec_CondRetOK;
}

/*********** Fim do m�dulo de implementa��o: M�dulo DadoPontos **************/
