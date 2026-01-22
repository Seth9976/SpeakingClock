// 函数: sub_4681f8
// 地址: 0x4681f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t esi_1 = arg2

if (data_4b1cd4 == 0)
    int32_t* eax
    eax, arg2, ebp_1 = sub_40d724("comctl32.dll")
    data_4b1cd4 = eax
    
    if (data_4b1cd4 u>= 0x60000)
        HMODULE hModule
        hModule, arg2 = GetModuleHandleA("comctl32.dll")
        
        if (hModule != 0)
            int32_t eax_1
            eax_1, arg2 = GetProcAddress(hModule, "ImageList_WriteEx")
            data_4b1cd8 = eax_1

arg2.b = 1
ebp_1[-1] = sub_423e50(esi_1, arg2, &data_418274, 0)
int32_t* var_18_4 = ebp_1
int32_t (* var_1c_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp

if (data_4b1cd8 == 0)
    struct IStream pstm = ebp_1[-1]
    
    if (pstm != 0)
        pstm -= 0xffffffec
    
    BOOL eax_10
    int32_t edx_1
    eax_10, edx_1 = ImageList_Write(sub_466cac(arg1), pstm)
    esp = &ExceptionList
    
    if (eax_10 == 0)
        edx_1.b = 1
        sub_40451c(sub_40cf6c(sub_41715c+0x268, edx_1, data_4ac174))
else
    int32_t eax_3 = ebp_1[-1]
    
    if (eax_3 != 0)
        eax_3 -= 0xffffffec
    
    int32_t eax_6
    int32_t edx
    eax_6, edx = data_4b1cd8(sub_466cac(arg1), 1, eax_3)
    esp = &var_8
    
    if (eax_6 != 0)
        edx.b = 1
        sub_40451c(sub_40cf6c(sub_41715c+0x268, edx, data_4ac174))

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4682f9
return sub_403c68(ebp_1[-1])
