// 函数: sub_488c80
// 地址: 0x488c80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t** var_c = arg3
var_c.b = arg2
sub_404b88(arg3)
uint32_t result = zx.d(arg1)

switch (result)
    case 0
        result = sub_404bdc(arg3, 0x488d30)
    case 1
        result = sub_404bdc(arg3, 0x488d3c)
    case 2
        result = sub_404bdc(arg3, 0x488d6c)
    case 3
        result = sub_404bdc(arg3, 0x488d48)
    case 4
        result = sub_404bdc(arg3, 0x488d54)
    case 5
        result = sub_404bdc(arg3, 0x488d60)

if (var_c.b != 0 && *arg3 != 0)
    return sub_404ea0(arg3, 0x488d78, *arg3)

return result
