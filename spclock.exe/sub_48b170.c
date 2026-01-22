// 函数: sub_48b170
// 地址: 0x48b170
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t pcbBuffer = arg3
pcbBuffer = 0x3f
sub_4052a8(arg1, pcbBuffer)

if (GetUserNameA(sub_405018(*arg1), &pcbBuffer) == 0)
    return sub_406a30(data_4ac0c8, arg1)

return sub_4052a8(arg1, pcbBuffer - 1)
