// 函数: sub_40a390
// 地址: 0x40a390
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* var_1004 = arg3
int32_t esi
int32_t var_1018 = esi
char* i_1 = 0x1000
char* eax = arg2

if (eax != 0)
    eax = *(eax - 4)

void var_1010
void* i

if (eax s>= 0xc00)
    char* i_2 = arg2
    
    if (i_2 != 0)
        i_2 = *(i_2 - 4)
    
    i_1 = i_2
    i = i_1
else
    char* eax_2 = arg2
    
    if (eax_2 != 0)
        eax_2 = *(eax_2 - 4)
    
    char* var_1020_1 = eax_2
    int32_t var_1024_1 = arg1
    i = sub_409f84(arg2, 0xfff, &var_1010, esi, arg3, arg4)

if (i_1 - 1 s> i)
    sub_404c78(arg3, &var_1010, i)
    return arg3

char* esi_1

for (; i_1 - 1 s<= i; i = sub_409f84(arg2, i_1 - 1, *arg3, esi_1, arg3, arg4))
    i_1 *= 2
    sub_404b88(arg3)
    sub_4052a8(arg3, i_1)
    esi_1 = arg2
    
    if (esi_1 != 0)
        esi_1 = *(esi_1 - 4)
    
    char* var_1020_2 = esi_1
    int32_t var_1024_2 = arg1

return sub_4052a8(arg3, i)
