// 函数: sub_48cf94
// 地址: 0x48cf94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = sub_404b88(arg2)

switch (zx.d(*(arg1 + 0x30)))
    case 0
        ecx = sub_404bdc(arg2, "horizontal")
    case 1
        ecx = sub_404bdc(arg2, "vertical")
    case 2
        ecx = sub_404bdc(arg2, "square")
    case 3
        ecx = sub_404bdc(arg2, "elliptic")
    case 4
        ecx = sub_404bdc(arg2, "top left")
    case 5
        ecx = sub_404bdc(arg2, "top right")
    case 6
        ecx = sub_404bdc(arg2, "bottom left")
    case 7
        ecx = sub_404bdc(arg2, "bottom right")
    case 8
        ecx = sub_404bdc(arg2, "top left diag")
    case 9
        ecx = sub_404bdc(arg2, "top right diag")

int64_t* var_20 = *arg2
void* const var_24 = ", Col: "
*(arg1 + 0x18)
sub_409340(ecx, &var_8)
int32_t var_28 = var_8
sub_404f1c(arg2, 3)

if (*(arg1 + 0x38) == 0)
    sub_404e54(arg2, ", mult. col mode")
else
    sub_404e54(arg2, ", 2 col mode")

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_48d0d9
int32_t* result = &var_8
sub_404b88(result)
return result
