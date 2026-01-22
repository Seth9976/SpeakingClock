// 函数: sub_4234f0
// 地址: 0x4234f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
esi.w = 0xfff5
sub_403e64(arg2, esi, arg1)
int32_t* eax_1 = arg2[1]

if (eax_1 != 0)
    sub_423554(eax_1, arg2)

(*(*arg1 + 0x20))(arg2[2])
sub_42349c(arg1, arg2)
int32_t ecx_1
int32_t edx_5
ecx_1, edx_5 = sub_423a28(arg2, 1)

if ((arg1[7].b & 0x10) != 0)
    ecx_1.b = 1
    edx_5.b = 1
    sub_4239d8(arg2, edx_5, ecx_1)

return (*(*arg1 + 0x10))()
