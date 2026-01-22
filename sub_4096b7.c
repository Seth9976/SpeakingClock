// 函数: sub_4096b7
// 地址: 0x4096b7
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += 1
*arg1 += arg1.b
*0x53000031 += arg3:1.b
char ebx = arg1.b

if (arg2.b == 0)
    return sub_404bdc(arg3, (&data_4aa82c)[zx.d(ebx)])

sub_409510()

if (ebx == 0)
    return sub_404bdc(arg3, *data_4af918)

return sub_404bdc(arg3, *data_4af914)
