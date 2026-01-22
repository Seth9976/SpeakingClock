// 函数: sub_42be60
// 地址: 0x42be60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t __saved_ebx_4
int32_t __saved_ebx = __saved_ebx_4
int32_t __saved_esi_4
int32_t __saved_esi = __saved_esi_4
int32_t __saved_edi_4
int32_t __saved_edi = __saved_edi_4

if (arg1 == 0)
    return 

sub_42c308(arg3)
int32_t* var_3c = &__saved_ebp
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
int32_t ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg3 + 0x10))(ExceptionList, var_40, var_3c)
sub_42c818(arg3, 9)
sub_42c308(sub_430bec(arg1))
int32_t* var_c_1 = &__saved_ebp
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
ExceptionList_2 = arg2[2] - *arg2
int32_t var_18 = arg2[3] - arg2[1]
int32_t wSrc = arg5[2] - *arg5
int32_t hSrc = arg5[3] - arg5[1]
int32_t eax_11
int32_t edx_1
eax_11, edx_1 = sub_430dc4(var_c_1)

if (eax_11 != arg4)
    edx_1.b = 1
    int32_t* eax_17 = sub_430618(sub_42a104+0x140, edx_1)
    (*(*eax_17 + 8))()
    sub_430f38(eax_17, arg4)
    sub_42c818(sub_430bec(eax_17), 1)
    int32_t var_24_1 = *(sub_430bec(eax_17) + 4)
    int32_t var_2c_2 = 0
else
    int32_t var_28 = 0
    HGDIOBJ h = (*(*var_c_1 + 0x6c))()
    HGDIOBJ var_2c_1 = SelectObject(CreateCompatibleDC(nullptr), h)

int32_t* hDest_1 = &__saved_ebp
int32_t (* var_1c_2)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_42c818(sub_430bec(var_c_1), 1)
struct _EXCEPTION_REGISTRATION_RECORD** esp_1
int32_t xDest

if (sub_42bce4(arg3[5]) != 1)
    enum ROP_CODE rop = SRCCOPY
    int32_t ySrc = arg5[1]
    int32_t xSrc = *arg5
    HDC hdcSrc = *(sub_430bec(var_c_1) + 4)
    int32_t hDest = hDest_1
    int32_t wDest = ExceptionList_2
    ExceptionList = arg2[1]
    xDest = *arg2
    StretchBlt(arg3[1], xDest, ExceptionList, wDest, hDest, hdcSrc, xSrc, ySrc, wSrc, hSrc, rop)
    ExceptionList_1 = SetTextColor(arg3[1], 0)
    COLORREF color = SetBkColor(arg3[1], 0xffffff)
    enum ROP_CODE rop_1 = 0xe20746
    int32_t ySrc_1 = arg5[1]
    int32_t xSrc_1 = *arg5
    HDC __saved_edi_3 = 0xe20746
    int32_t wDest_1 = ExceptionList_2
    ExceptionList = arg2[1]
    xDest = *arg2
    StretchBlt(arg3[1], xDest, ExceptionList, wDest_1, hDest_1, __saved_edi_3, xSrc_1, ySrc_1, 
        wSrc, hSrc, rop_1)
    SetTextColor(arg3[1], ExceptionList_1)
    SetBkColor(arg3[1], color)
    esp_1 = &ExceptionList_1
else
    int32_t ExceptionList_3 = ExceptionList_2
    int32_t hDest_2 = hDest_1
    HDC eax_34 = *(sub_430bec(var_c_1) + 4)
    int32_t eax_35 = *arg5
    int32_t eax_36 = arg5[1]
    HDC ExceptionList_4 = ExceptionList_3
    ExceptionList = *arg5
    xDest = arg5[1]
    esp_1 = &xDest
    ebp = sub_42ccf0(arg3[1], *arg2, arg2[1], xDest, ExceptionList, ExceptionList_4, hSrc, wSrc, 
        eax_36, eax_35, eax_34, hDest_2, ExceptionList_3)
esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_42c0c9
void* esp_5 = &esp_1[2]

if (ebp[-9] != 0)
    sub_403c68(ebp[-9])
    return 

if (ebp[-0xa] != 0)
    *(esp_5 - 4) = ebp[-0xa]
    *(esp_5 - 8) = ebp[-8]
    SelectObject()

*(esp_5 - 4) = ebp[-8]
DeleteDC()
