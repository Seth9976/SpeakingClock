// 函数: sub_41590c
// 地址: 0x41590c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax_1 = sub_415888(arg1)
int16_t* var_30 = arg2
int16_t var_2c = (*eax_1).w
void var_28
void* edi = &var_28
void* esi_2 = &eax_1[1]
*edi = *esi_2
void* edi_1 = edi + 4
void* esi_3 = esi_2 + 4
*edi_1 = *esi_3
*(edi_1 + 4) = *(esi_3 + 4)
int16_t* esi_6 = var_30
int32_t* eax_3 = sub_415888(esi_6)
var_30 = esi_6
int16_t var_1c = (*eax_3).w
void var_18
void* edi_4 = &var_18
void* esi_8 = &eax_3[1]
*edi_4 = *esi_8
void* edi_5 = edi_4 + 4
void* esi_9 = esi_8 + 4
*edi_5 = *esi_9
*(edi_5 + 4) = *(esi_9 + 4)
int16_t result

if (var_2c == 0)
    result.b = var_1c == 0
else if (var_2c != 1)
    if (var_1c u< 2)
        return 0
    
    sub_415e90()
    result.b = var_1c == 2
else
    result.b = var_1c == 1

return result
