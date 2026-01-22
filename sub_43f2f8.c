// 函数: sub_43f2f8
// 地址: 0x43f2f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = GetDeviceCaps(*(*(arg1 + 0x58) + 0x20), 0x5a)
void* esi = *(arg1 + 0xc)

if (result == *(esi + 0x1c))
    return result

int32_t eax_3 = sub_42b5fc(esi)
int32_t eax_6 = GetDeviceCaps(*(*(arg1 + 0x58) + 0x20), 0x5a)
void* edi_1 = *(arg1 + 0xc)
*(edi_1 + 0x1c) = eax_6
return sub_42b618(edi_1, eax_3)
