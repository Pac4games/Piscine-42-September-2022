/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesus-l <jjesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:03:10 by jjesus-l          #+#    #+#             */
/*   Updated: 2022/09/12 05:55:31 by jjesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//       implementa'mos
#include <unistd.h>

// funcao para escrever os chars constantes. O write nao aceita pq recebe um 
//    pointer para uma var char                         
void	ft_putchar(char c);

// funcao que desenha os chars, conforme o requito do rush (de 00 a 05)
// recebe: a linha e a coluna currente (que vai ser escrita) e a altura e a 
//         largura da figura
// com base na posicao corrente a desenhar, e' seleccionado o char a desenhar
// O rush 01 e 04 tem uma consicao diferente, para garantir o desenho
//    qdo a altura e/ou a largura e' 1.
void	ft_write_symbols(int ln, int cl, int y, int x)
{
	if (ln == 1 || ln == y)
	{
		if (cl == 1 || cl == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (cl == 1 || cl == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

// funcao que percorre todas as posicoes a desenhar. Implemnata dois ciclos,
//    para executar x * y vezes. Processo igual em todos os rushs (so' muda o 
//    q e' para desenhard).
// recebe: a altura e a largura da figura, passadas pela main qdo invoca esta 
//         funcao
void	rush(int larg, int alt)
{
	int	col;
	int	lin;

	if (larg <= 0 || alt <= 0)	// teste dos valores de entrada para evitar 
								//    desenhos "marados"
		return ;
	lin = 1;
	while (lin <= alt)  		// ciclo externo (controla a qtd de lihas 
	{							//    a escrever)
		col = 1;
		while (col <= larg)  	// ciclo interno (controla a qtd de colunas
		{						//    a escrever em cada linha)
			// a linha abaixo chama a funcao q desenh os chars da figura
			// para cada coluna de cada linha, e' ela q decide o q escrever
			ft_write_symbols(lin, col, alt, larg);
			col++;
		}
		ft_putchar('\n');		// mudar de linha, para desenhar a proxima 
		lin++;
	}
}
