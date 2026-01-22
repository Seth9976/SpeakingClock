// 函数: sub_461bf8
// 地址: 0x461bf8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edx

if (arg1 != *(*(arg1 + 0x1c) + 0x64))
    edx = *(arg1 + 0x14)
else
    edx = arg1

char ecx = *(edx + 0x10)

if (ecx == 1)
    return sub_461cc4(arg1, 1)

if (ecx == 2)
    return sub_461cc4(arg1, 2)

edx.b = 1
return sub_40451c(sub_40ceb0(sub_407f68+0x68, edx, nullptr))
