// 函数: sub_41e664
// 地址: 0x41e664
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t (* var_1c)() = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = arg2
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx_2 = sub_41f9d8(arg1, &ExceptionList_1, 
    sub_41f9d8(arg1, &var_1c, (*(*arg1 + 0x28))(ExceptionList, var_40, var_3c)))
int32_t eax_4 = arg1[0xb]
int32_t eax_6 = arg1[7]
int32_t* var_c_1 = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_2 = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_2
fsbase->NtTib.ExceptionList = &ExceptionList_2
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = ExceptionList_2
char var_d

if (ExceptionList_3 == 0)
    if ((var_d & 1) == 0)
        ExceptionList_3 = &var_4
        edx_2 = sub_41e410(ExceptionList_3)
        esp = &ExceptionList_2
    else
        ExceptionList_3 = &var_4
        edx_2 = sub_41e5c0(ExceptionList_3)
        esp = &ExceptionList_2

if (ExceptionList_3 != 0)
    int32_t* var_18 = &var_4
    var_1c = j_sub_404188
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_24_1 = &var_4
    sub_41e2b0(var_18, edx_2)
    var_18[7].w |= 1
    int32_t* var_24_2 = &var_4
    sub_41e328(1, 1, var_24_1)
    int32_t* ecx_5 = var_24_2
    
    if ((var_d & 1) == 0)
        int32_t* var_24_3 = &var_4
        sub_41e520(var_24_3)
        ecx_5 = var_24_3
    
    if (var_18 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        sub_4045c8(ExceptionList_2, var_10)
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = &data_41e88f
        sub_404bac(&ExceptionList_1, 2)
        int32_t* eax_30 = &var_8
        sub_405e78(eax_30, 0x41e254)
        return eax_30
    
    if ((*(var_18 + 0x1d) & 2) != 0)
        var_c_1[7] = var_18
    
    var_18[7].w |= 2
    int32_t* var_24_4 = &var_4
    int32_t* edx_4
    edx_4.b = 1
    sub_41e328(2, edx_4.b, ecx_5)
    void* ecx_8 = (*(*var_18 + 0x14))()
    var_18[7].w &= 0xfffd
    int32_t* var_18_1 = &var_4
    sub_41e328(2, 0, ecx_8)
    
    if ((var_d & 2) != 0)
        esi.w = 0xfff9
        sub_403e64(var_c_1[0xb], esi, var_18_1, var_24_4)
    
    if ((var_d & 1) != 0 || (*(var_18_1 + 0x1d) & 2) != 0)
        if (sub_41a150(var_c_1[0xd], var_18_1) s< 0)
            int32_t* var_18_2 = &var_4
            sub_41e274(var_18_2)
            sub_419f9c(var_c_1[0xd], var_18_2)
    else
        int32_t* var_18_3 = &var_4
        sub_41e274(var_18_3)
        sub_419f9c(var_c_1[0xd], var_18_3)
    
    esp = &var_8
    fsbase->NtTib.ExceptionList = ExceptionList_2

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = 0x41e85f
var_c_1[0xb] = eax_4
var_c_1[7] = eax_6
return var_c_1
