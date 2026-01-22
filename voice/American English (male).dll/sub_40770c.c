// 函数: sub_40770c
// 地址: 0x40770c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char* var_8 = arg2
arg2.b = data_414687
char var_9 = arg2.b
arg2.b = data_414686
char var_a = arg2.b
int32_t var_10 = data_414680
int32_t eax
eax.b = data_414684
char var_11 = eax.b
eax.b = data_414685
char var_12 = eax.b
int32_t eax_1 = 0x13

if (arg1 == 0)
    eax_1 = arg4
    
    if (eax_1 s< 2)
        eax_1 = 2
    
    if (eax_1 s> 0x12)
        eax_1 = 0x12

int32_t var_40 = eax_1
int32_t eax_2 = 0x270f

if (arg5 u>= 2)
    eax_2 = arg3

int32_t var_44 = eax_2
int32_t* edx
sub_4079e0(arg1, edx)
char* edi = var_8
int16_t var_30

if (zx.d(var_30) - 0x7fff u>= 2)
    uint32_t ebx_1 = zx.d(arg5)
    
    if (ebx_1.b != 1 && (ebx_1.b u> 4 || sx.d(var_30) s> eax_1))
        ebx_1.b = 0
    
    (*((ebx_1 << 2) + sub_4077e8))()
else
    int32_t __saved_ebp
    sub_40780b(&__saved_ebp, edi)
    edi = __builtin_memcpy(edi, (zx.d(var_30) - 0x7fff) * 3 + 0x4077fc, 3)

return edi - var_8
