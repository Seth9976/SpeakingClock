// 函数: sub_415898
// 地址: 0x415898
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = sub_415888(arg1)
int16_t result_1 = (*esi).w
void var_18
void* edi = &var_18
void* esi_1 = &esi[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)

if (result_1 u>= 0x10f)
    int32_t* var_20
    
    if (sub_415ce4(result_1, &var_20) == 0)
        return 0
    
    return (*(*var_20 + 0x14))()

uint32_t result

if (result_1 != 0)
    result = zx.d(result_1)
    int32_t var_14
    
    if (result.w == 9)
        if (var_14 != 0)
            return 0
    else if (result.w != 0xd || var_14 != 0)
        return 0

result.b = 1
return result
