#ifndef CPP_CODE_H
#define CPP_CODE_H

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_code_entry_point();

/**
 * Возвращает значение внутреннего счётчика
 *
 * @param type 's' = sbrk, 'm' = malloc, 'f' = free
 * @return значение счётчика или -1 при некорректном типе
 */
int get_counter(char type);

#ifdef __cplusplus
}
#endif


#endif
