// 函数: sub_457b28
// 地址: 0x457b28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t var_10 = 0
void* ebx_1 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
POINT* var_c
int32_t var_8

if (*(ebx_1 + 0x30) == 0)
    var_c = *(ebx_1 + 8)
    var_8.b = 0xb
    int32_t* var_28_1 = &var_c
    sub_406a30(data_4ac348, &var_10)
    int32_t edx_2
    edx_2.b = 1
    int64_t** eax_2
    eax_2, ebx_1, ebp_1 = sub_40ceec(sub_417654+0x48, edx_2, var_10, 0)
    sub_40451c(eax_2)

HDC hdc = (*(**(ebx_1 + 0x30) + 0x48))()
var_c = nullptr
var_10 = *(ebx_1 + 0x44)
SetViewportOrgEx(hdc, *(ebx_1 + 0x40), var_10, var_c)
var_c = *(ebx_1 + 0x4c)
var_10 = *(ebx_1 + 0x48)
IntersectClipRect(hdc, 0, 0, var_10, var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_457bc5
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]
