// 函数: sub_454bdc
// 地址: 0x454bdc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_454a58(arg1, arg2)
char result = sub_403df4(arg2, &data_4517f4)

if (result == 0)
    return result

*(arg1 + 0x5c) = arg2[0x17].b
*(arg1 + 0x60) = arg2[0x18]
*(arg1 + 0x74) = arg2[0x1d].b
*(arg1 + 0x4c) = arg2[0x13]
void* edi_2 = arg1 + 0x50
void* esi_2 = &arg2[0x14]
*edi_2 = *esi_2
void* edi_3 = edi_2 + 4
void* esi_3 = esi_2 + 4
*edi_3 = *esi_3
*(edi_3 + 4) = *(esi_3 + 4)
int32_t* var_10_2 = arg2
*(arg1 + 0x64) = arg2[0x19]
void* edi_7 = arg1 + 0x68
void* esi_8 = &arg2[0x1a]
*edi_7 = *esi_8
void* edi_8 = edi_7 + 4
void* esi_9 = esi_8 + 4
*edi_8 = *esi_9
*(edi_8 + 4) = *(esi_9 + 4)
arg2[0x12]
return (*(**(arg1 + 0x48) + 8))()
