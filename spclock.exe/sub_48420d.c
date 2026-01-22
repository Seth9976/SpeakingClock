// 函数: sub_48420d
// 地址: 0x48420d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t temp0 = divs.dp.d(arg2:arg3, arg4)
int32_t temp1 = mods.dp.d(arg2:arg3, arg4)
sub_403c68(*(temp0 + 0x20))
int32_t edx
edx.b = temp1.b & 0xfc
int32_t result = sub_41b190(temp0, edx)

if (temp1.b s<= 0)
    return result

return sub_40401c(temp0)
