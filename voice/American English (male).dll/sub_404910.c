// 函数: sub_404910
// 地址: 0x404910
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

MEMORY_BASIC_INFORMATION buffer
VirtualQuery(arg1, &buffer, 0x1c)

if (buffer.State != 0x1000)
    return nullptr

return buffer.AllocationBase
