// 函数: sub_461128
// 地址: 0x461128
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HDC hDC_2
HDC hDC = hDC_2
HDC hDC_1 = GetWindowDC(sub_45f888(arg1))
int32_t* var_10_1 = &hDC
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xdc))(ExceptionList, var_14, var_10_1, hDC_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_461185
hDC = hDC_1
return ReleaseDC(sub_45f888(arg1), hDC)
