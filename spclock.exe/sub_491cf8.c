// 函数: sub_491cf8
// 地址: 0x491cf8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx = sub_404074(arg1, arg2)

if (arg1[0x13].w != 0)
    sub_491b3c(arg1, 0, ecx)

DeleteAtom(*(arg1 + 0x4a))

if (arg1[0x16] != 0)
    sub_46bd74()

arg1[0x16] = 0
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_423380(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
