// 函数: sub_44abc8
// 地址: 0x44abc8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9 = 0
int32_t eax_2 = *arg1

if (eax_2 != 0)
    eax_2 = *(eax_2 - 4)

int32_t edx = arg2

if (edx != 0)
    edx = *(edx - 4)

if (edx s<= eax_2)
    int32_t esi_1 = arg2
    
    if (esi_1 != 0)
        esi_1 = *(esi_1 - 4)
    
    char* eax_5 = sub_405018(arg2)
    
    if (sub_40903c(sub_405018(*arg1), eax_5, esi_1) == 0)
        var_9 = 1
        int32_t eax_10 = arg2
        
        if (eax_10 != 0)
            eax_10 = *(eax_10 - 4)
        
        sub_4050c0(arg1, 1, eax_10)

return zx.d(var_9)
