// 函数: sub_405edc
// 地址: 0x405edc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

MEMORY_BASIC_INFORMATION buffer
VirtualQuery(arg1, &buffer, 0x1c)

if (buffer.State != 0x1000)
    return nullptr

return buffer.AllocationBase
