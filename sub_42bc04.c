// 函数: sub_42bc04
// 地址: 0x42bc04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = *(arg1 + 0x10)

if (var_8->__offset(0x8).d != 0)
    return var_8->__offset(0x8).d

sub_42a578(data_4b1a9c)
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (var_8->__offset(0x8).d == 0)
    int32_t* eax_5 = var_8->__offset(0x18).d
    int32_t var_14
    
    if (eax_5 == 0)
        int32_t var_c_2 = 0
        uint32_t eax_10 = zx.d(var_8->__offset(0x1c).b)
        char temp0_1 = eax_10.b
        
        if (temp0_1 u< 1)
            var_14 = 0
        else if (temp0_1 == 1)
            var_14 = 1
        else
            var_14 = 2
            int32_t var_c_3 = (eax_10 & 0x7f) - 2
    else
        var_14 = 3
        int32_t edx
        edx.b = 1
        (*(*eax_5 + 0x70))()
        esp_1 = &var_8
        int32_t var_c_1 = (*(*var_8->__offset(0x18).d + 0x68))()
    
    int32_t var_10_1 = sub_42ad8c(var_8->__offset(0x14).d)
    *(esp_1 - 4) = &var_14
    var_8->__offset(0x8).d = CreateBrushIndirect()

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = 0x42bcd9
return sub_42a584(data_4b1a9c)
