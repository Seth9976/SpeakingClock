// 函数: sub_481d7c
// 地址: 0x481d7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HDC hDC_2
HDC hDC = hDC_2
void* eax = sub_4659bc()

if (sub_465ac4(eax) == 0 || arg1[0x67] u<= 0)
    return sub_46086c(arg1, arg2)

HDC var_10 = GetWindowDC(sub_45f888(arg1))
int32_t* var_34_1 = &hDC
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_38, var_34_1)
int32_t eax_9 = arg1[0x67]
int32_t left
sub_406cd0(&left, eax_9, eax_9)
int32_t top
int32_t var_18
int32_t bottom
ExcludeClipRect(var_18, left, top, var_18, bottom)
int32_t eax_18 = neg.d(arg1[0x67])
arg1[0x67]
SetWindowOrgEx(eax_18, eax_18, eax_18, nullptr)
int32_t edx_4
edx_4.b = 0x2b
void var_2c
sub_465e88(&var_2c, edx_4)
HDC hDC_1 = nullptr
sub_465c5c(hDC_1, sub_45f888(arg1), eax, 0, hDC_1.b, &var_2c)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_481e79
hDC = hDC_1
return ReleaseDC(sub_45f888(arg1), hDC)
