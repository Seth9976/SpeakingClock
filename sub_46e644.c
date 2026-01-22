// 函数: sub_46e644
// 地址: 0x46e644
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebx = arg2
int32_t result = arg1[0xc]

if (ebx == result || ebx == arg1)
    return result

int32_t var_c
var_c:3.b = result == 0

if (var_c:3.b != 0)
    arg2.b = 1
    sub_460db8(arg1, arg2)

int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (var_c:3.b != 0)
    (*(*arg1 + 0xb0))()

if ((arg1[7].b & 0x10) == 0)
    arg1[0x9a] = 0

arg1[0x9b] = 0
void* ebp_1 = sub_460e80(arg1, ebx)

if (*(*(ebp_1 - 4) + 0x30) == 0)
    ebp_1 = sub_45c37c(*(ebp_1 - 4))

fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_46e6fb

if (*(ebp_1 - 5) == 0)
    return nullptr

return sub_460db8(*(ebp_1 - 4), 0)
