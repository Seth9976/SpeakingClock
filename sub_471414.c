// 函数: sub_471414
// 地址: 0x471414
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
HBRUSH var_c = arg2
int32_t* var_8 = arg1
sub_42c308(var_8[0xa0])
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
sub_42c7c4(var_8[0xa0], var_c)
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t var_10 = SaveDC(var_c)
int32_t* var_44_1 = &var_4
int32_t (* var_48)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_7 = sub_478638(var_8)

if (sub_478924(eax_7) != 0)
label_4714ae:
    (*(*var_8 + 0x44))()
    char eax_14
    
    if (*(eax_7 + 0x28) != 0)
        eax_14 = 0
    else
        eax_14 = *(var_8[0xa9] + 8) ^ 1
    
    RECT var_20
    
    if (eax_14 == 0)
        *(var_8[0xa9] + 8) = 0
    else
        int32_t bottom = var_20.bottom - *(eax_7 + 0x18)
        var_20.bottom = *(eax_7 + 0x10)
        var_20.right = *(eax_7 + 0xc)
        var_20.top = bottom
        ExcludeClipRect(var_20.top, var_20.right, var_20.bottom, var_20.right - *(eax_7 + 0x14), 
            bottom)
    
    if (var_8[0xa6] != 0)
        sub_42bbb0(*(var_8[0xa0] + 0x14), 0xff000002)
        sub_42bcec(*(var_8[0xa0] + 0x14), 5)
        var_c = sub_42ad8c(var_8[0x1c])
        var_10 = sub_42c73c(var_8[0xa0])
        SetBkColor(var_10, var_c)
        esp_1 = &var_8
        sub_42c258(var_8[0xa0], &var_20)
    else
        var_c = GetStockObject(BLACK_BRUSH)
        var_10 = &var_20
        var_20.bottom = sub_42c73c(var_8[0xa0])
        FillRect(var_20.bottom, var_10, var_c)
        esp_1 = &var_8
else if (var_8[0xa6] != 0 && *(eax_7 + 8) != 0)
    goto label_4714ae

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_4715a6
esp_1[1] = var_10
*esp_1 = var_c
return RestoreDC()
