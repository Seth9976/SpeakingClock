// 函数: sub_42ea64
// 地址: 0x42ea64
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
HENHMETAFILE hmf = arg1[2]

if (hmf != 0)
    DeleteEnhMetaFile(hmf)

int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_403c58(sub_42a41c(arg1[5]), edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
