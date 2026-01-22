// 函数: sub_40a4b0
// 地址: 0x40a4b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* var_8 = arg2
arg2.b = data_4af813
char var_9 = arg2.b
arg2.b = data_4af812
char var_a = arg2.b
int32_t var_10 = data_4af80c
int32_t eax
eax.b = data_4af810
char var_11 = eax.b
eax.b = data_4af811
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
sub_40a784(arg1, edx)
char* edi = var_8
int16_t var_30

if (zx.d(var_30) - 0x7fff u>= 2)
    uint32_t ebx_1 = zx.d(arg5)
    
    if (ebx_1.b != 1 && (ebx_1.b u> 4 || sx.d(var_30) s> eax_1))
        ebx_1.b = 0
    
    (&data_40a58c)[ebx_1]()
else
    int32_t __saved_ebp
    sub_40a5af(&__saved_ebp, edi)
    edi = __builtin_memcpy(edi, (zx.d(var_30) - 0x7fff) * 3 + 0x40a5a0, 3)

return edi - var_8
