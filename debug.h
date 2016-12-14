/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:14:21 by talemari          #+#    #+#             */
/*   Updated: 2016/12/14 14:33:27 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include <stdio.h>

# define DB__POS() printf("%s Line %d : ", __FUNCTION__, __LINE__)
# define DB__NAME() db__put2endl(__FUNCTION__, " : ");
# define malloc(x) db__malloc(x, __FILE__, __func__, __LINE__)
# define free(x) db__free(x)
# define ERR01 "Error : Empty string."
# define ERR02 "Error : Empty pointer."
# define ERR03 "Error : Both string empty."
# define ERR04 "Error : Pointer already allocated."
# define ERR05 "Error : File missing or name misstype."
# define ERR06 "Error : Failed to read."

void				db__finalfree(void);
void				db__free(void *ptr);
void				*db__malloc(size_t size, const char *file, const char *function, int line);
void				db__memdel(void **ptr);
void				db__printleaks(void);
void				db__putendl(const char *c);
void				db__puthexendl(int nb);
void				db__putnbendl(int nb);
void				db__putstr(const char *c);
void				db__put2endl(const char *s1, const char *s2);
void				db__put2str(const char *s1, const char *s2);

#endif
