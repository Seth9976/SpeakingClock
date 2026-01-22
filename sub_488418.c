// 函数: sub_488418
// 地址: 0x488418
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg3

if (sub_430ca8(arg2) != 0)
    edi = 2

HPALETTE eax_3 = (*(*arg2 + 0x24))(edi, 0)
sub_48839c(arg1, (*(*arg2 + 0x68))(eax_3), eax_3, arg5, arg4)
return (*(*arg1 + 0x14))()
