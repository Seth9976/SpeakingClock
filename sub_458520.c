// 函数: sub_458520
// 地址: 0x458520
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t ebp
int32_t var_10 = ebp
int32_t* var_20
int32_t* esp = &var_20
var_20 = arg1
int32_t* edi_1 = *(arg2 + 8)
int32_t* esi_1 = edi_1[2]
char eax_1 = sub_403df4(esi_1, &data_4517f4)

if (data_4b1c6c != 0 && eax_1 == 0)
    sub_403e18(esi_1, 0x4516d8)
    esi_1 = esi_1[0x10]

int32_t var_1b
sub_457310(var_20, edi_1, &var_1b)
uint32_t result = zx.d(*(arg2 + 4))
char temp0 = result.b
result.b -= 3
int32_t var_17

if (temp0 u< 3)
    char result_1 = 1
    
    if (eax_1 == 0)
        int32_t* edx_2 = esi_1
        esi_1.w = 0xffde
        sub_403e64(var_20, esi_1, edx_2, var_1b, &result_1, zx.d(*(arg2 + 4)), var_17)
        esp = &var_20
    else
        int32_t* edx_1 = esi_1
        esi_1.w = 0xffc3
        sub_403e64(edi_1[3], esi_1, edx_1, var_1b, &result_1, zx.d(*(arg2 + 4)), var_17)
        esp = &var_20
    
    result = zx.d(result_1)
    *(arg2 + 0xc) = result
else if (temp0 == 3)
    if (eax_1 == 0)
        int32_t* edx_4 = esi_1
        esi_1.w = 0xffcb
        result = sub_403e64(var_20, esi_1, edx_4, var_1b, var_17)
        esp = &var_1b:3
    else
        int32_t* edx_3 = esi_1
        esi_1.w = 0xffb5
        result = sub_403e64(edi_1[3], esi_1, edx_3, var_1b, var_17)
        esp = &var_1b:3
esp[4]
esp[5]
esp[6]
esp[7]
return result
