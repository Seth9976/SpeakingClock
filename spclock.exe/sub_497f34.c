// 函数: sub_497f34
// 地址: 0x497f34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_40 = ebx
char var_c = *((arg3 & 0x7f) + 0x4abe20)
char var_12 = *(zx.d(arg1) + 0x4abe20)
char var_11 = *(zx.d(arg7) + 0x4abe20)
char var_10 = *(zx.d(arg6) + 0x4abe20)
char var_f = *(zx.d(arg5) + 0x4abe20)
char var_e = *(zx.d(arg8) + 0x4abe20)
char var_d = *(zx.d(arg2) + 0x4abe20)
int32_t var_18 = 0

while (true)
    int32_t var_b
    
    if (sub_497e94() s<= var_18)
    label_498006:
        *arg4 = var_b
        int16_t var_7
        int32_t edx_1
        edx_1.w = var_7
        arg4[1].w = edx_1.w
        char var_5
        edx_1.b = var_5
        *(arg4 + 6) = edx_1.b
        return arg4
    
    sub_497ea0(var_18, &var_b)
    char var_19_1 = 1
    ebx.b = 7
    int32_t* edi_1 = &var_b
    char* esi_1 = &var_12
    char i
    
    do
        int32_t var_3c
        __builtin_memcpy(&var_3c, 0x498020, 0x20)
        var_3c |= 1 << (zx.d(*esi_1) u% 0x20)
        
        if (not(test_bit(var_3c, zx.d(*edi_1))))
            var_19_1 = 0
        
        esi_1 = &esi_1[1]
        edi_1 += 1
        i = ebx.b
        ebx.b -= 1
    while (i != 1)
    
    if (var_19_1 != 0)
        goto label_498006
    
    var_18 += 1
