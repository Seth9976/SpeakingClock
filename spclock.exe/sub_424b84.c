// 函数: sub_424b84
// 地址: 0x424b84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result_1 = GetWindowLongA(arg1, 0xfffffffc)
int32_t result = DestroyWindow(arg1)

if (result_1 != DefWindowProcA)
    result = result_1
    sub_424aac(result)

return result
