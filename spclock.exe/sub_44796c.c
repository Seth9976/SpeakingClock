// 函数: sub_44796c
// 地址: 0x44796c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax_1 = arg1[0xf]
int32_t result = (*(*eax_1 + 0x50))(eax_1, &arg1[0x19])

if ((result & 0x80000000) == 0)
    int32_t esi
    esi.w = 0xffe6
    result = sub_403e64(arg1, esi, arg1[0x19], &arg1[0x11])
    (*(*arg1[0x13] + 0x44))()
    arg1[0x11]
    (*(*arg1[0x13] + 0x38))()

return result
