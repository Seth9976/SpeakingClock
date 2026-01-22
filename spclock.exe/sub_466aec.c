// 函数: sub_466aec
// 地址: 0x466aec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* hDC_2
void* hDC = hDC_2
int32_t ebx
int32_t var_20 = ebx
HDC hdc = GetDC(nullptr)
int32_t* var_24_1 = &hDC
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_1 = *(arg1 + 0x50)
sub_4319c4(ebx_1, CreateCompatibleBitmap(hdc, *(arg1 + 0x34), *(arg1 + 0x30)))
sub_42bbb0(*(sub_430bec(ebx_1) + 0x14), 0)
void var_1c
void var_10
sub_418a64((*(*ebx_1 + 0x2c))(&var_1c, (*(*ebx_1 + 0x20))(ExceptionList, var_28, var_24_1)), 0, 0, 
    var_10, hdc)
void* hDC_1 = &var_1c
sub_42c258(sub_430bec(ebx_1), hDC_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_466b94
hDC = hDC_1
return ReleaseDC(nullptr, hDC)
