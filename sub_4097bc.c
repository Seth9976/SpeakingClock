// 函数: sub_4097bc
// 地址: 0x4097bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t distanceToMoveHigh = arg5
uint32_t result = SetFilePointer(arg3, arg4, &distanceToMoveHigh, arg2)

if (result == 0xffffffff && GetLastError() != NO_ERROR)
    distanceToMoveHigh = 0xffffffff

return result
