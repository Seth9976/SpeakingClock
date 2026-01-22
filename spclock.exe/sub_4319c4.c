// 函数: sub_4319c4
// 地址: 0x4319c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
void* esi = arg1[0xa]

if (arg2 != *(esi + 8))
    sub_430e88(arg1)
    void var_5c
    sub_403578(&var_5c, 0x54, 0)
    HGDIOBJ ExceptionList
    
    if (arg2 != 0)
        void* pv = &var_5c
        int32_t c = 0x54
        ExceptionList = arg2
        GetObjectA(ExceptionList, c, pv)
    
    HPALETTE var_8_1
    
    if (*(esi + 4) != 1)
        HGDIOBJ eax_3 = *(esi + 0x10)
        
        if (eax_3 != data_4b1a48)
            var_8_1 = sub_4303a8(eax_3)
        else
            var_8_1 = data_4b1a48
    else
        var_8_1 = *(esi + 0x10)
        *(esi + 0x10) = 0
    
    int32_t* var_6c_1 = &var_4
    int32_t (* var_70_1)() = j_sub_404188
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx_1
    ebx_1, ebp_1 = sub_4312bc(arg1, arg2, var_8_1, nullptr, 0, &var_5c)
    fsbase->NtTib.ExceptionList = ExceptionList
    (*(*ebx_1 + 0x10))()

*ebp_1
