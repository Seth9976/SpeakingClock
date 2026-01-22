// 函数: sub_44ae18
// 地址: 0x44ae18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t j = 0
uint32_t result = 0
int32_t j_1 = 0
uint32_t result_1 = 0
uint32_t result_2 = 0

if (arg2 != 0)
    result = sub_44e490(arg2)
    result_1 = result

if (arg3 != 0)
    result = sub_44e490(arg3)
    result_2 = result

char i = 0

while (i == 0)
    if (result_1 s<= j && result_2 s<= j_1)
        break
    
    char var_5_1 = 0xff
    char var_19_1 = 0xff
    
    if (result_1 s> j)
        var_5_1 = *(sub_44e4a0(arg2, j) + 0x3f)
    
    if (result_2 s> j_1)
        var_19_1 = *(sub_44e4a0(arg3, j_1) + 0x3f)
    
    int32_t __saved_ebp
    
    if (var_5_1 u> var_19_1)
        var_5_1 = var_19_1
        result = sub_44adb4(&j_1, arg3, arg1, &__saved_ebp)
        i = result.b
    else
        result = sub_44adb4(&j, arg2, arg1, &__saved_ebp)
        i = result.b
    
    for (; result_1 s> j; j += 1)
        result = zx.d(*(sub_44e4a0(arg2, j) + 0x3f))
        
        if (result.b u> var_5_1)
            break
    
    for (; result_2 s> j_1; j_1 += 1)
        result = zx.d(*(sub_44e4a0(arg3, j_1) + 0x3f))
        
        if (result.b u> var_5_1)
            break

return result
