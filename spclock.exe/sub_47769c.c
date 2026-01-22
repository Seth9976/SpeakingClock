// 函数: sub_47769c
// 地址: 0x47769c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
char* var_10 = nullptr
int64_t* var_14 = nullptr
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
HANDLE eax_1 = sub_477610(arg1)

if (*(arg1 + 0x88) != 0 && *(arg1 + 0x48) == 0)
    sub_477ca0(arg1)

sub_474d3c(eax_1, &var_14)
sub_4544e4(var_14, &var_10)
sub_477894(data_4b1ce0, var_10)
char var_9 = 1
int32_t* var_30 = &var_4
int32_t (* var_34)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x12a) != 0)
    *(arg1 + 0x12c)
    (*(arg1 + 0x128))()
    esp_1 = &var_14

if (var_9 != 0)
    int32_t ebx_3 = *(arg1 + 0xc0)
    
    if (ebx_3 s<= 0)
        sub_4775ac()
    else if (data_4b1d0c == 0)
        *(esp_1 - 4) = sub_477634
        *(esp_1 - 8) = ebx_3
        *(esp_1 - 0xc) = 0
        *(esp_1 - 0x10) = 0
        data_4b1d0c = SetTimer()
        
        if (data_4b1d0c == 0)
            sub_4775ac()

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1

if (GetCurrentThreadId() == *data_4ac4d8 && sub_422b50(0) != 0)
    var_9 = 0

if (var_9 != 0)
    WaitMessage()

esp_1[5]
fsbase->NtTib.ExceptionList = esp_1[3]
esp_1[5] = sub_4777f0
return sub_404bac(&var_14, 2)
