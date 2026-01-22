// 函数: sub_4427a8
// 地址: 0x4427a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x68)
sub_42c630(*(arg1 + 0x190))
int32_t result = sub_42bbb0(*(*(arg1 + 0x190) + 0x14), *(arg1 + 0x70))

if ((*(arg1 + 0x1c) & 0x10) != 0)
    int32_t* esi_1 = *(arg1 + 0x190)
    sub_42b99c(esi_1[4], 1)
    sub_42bcec(esi_1[5], 1)
    result = sub_42c3d4(0, 0, esi_1, *(arg1 + 0x4c), *(arg1 + 0x48))

if (*(arg1 + 0x19a) == 0)
    return result

*(arg1 + 0x19c)
return (*(arg1 + 0x198))()
