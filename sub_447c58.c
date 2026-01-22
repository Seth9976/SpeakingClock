// 函数: sub_447c58
// 地址: 0x447c58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax_1 = arg1[0xf]
int32_t result = (*(*eax_1 + 0x18))(eax_1, &arg1[0x14])

if (*(arg1 + 0xaa) != 0 && (result & 0x80000000) == 0)
    int32_t esi
    esi.w = 0xffe8
    sub_403e64(arg1, esi)

return result
