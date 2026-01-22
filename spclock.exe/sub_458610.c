// 函数: sub_458610
// 地址: 0x458610
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9
HWND ExceptionList
int32_t points
int32_t var_1c

if (arg2 == 0 || arg2 == 0xffffffff)
    void* eax = arg3[0x25]
    
    if (eax == 0 || *(eax + 0x1db) == 0 || *(eax + 0x1b0) == 0)
        int32_t points_2
        sub_418a3c(arg3[0x10], arg3[0x11], &points_2)
        points = points_2
        int32_t var_24
        var_1c = var_24
        int32_t* esi_2 = arg3[0xc]
        
        if (esi_2 != 0)
            sub_457260(esi_2, &points, &points_2)
            points = points_2
            var_1c = var_24
    else
        (*(**(eax + 0x1b0) + 0x14))()
        uint32_t cPoints = 2
        int32_t* lpPoints = &points
        ExceptionList = nullptr
        MapWindowPoints(sub_45f888(arg3[0x25]), ExceptionList, lpPoints, cPoints)
    
    int32_t eax_11 = sub_457764(arg3)
    int32_t points_1
    sub_418a8c(sub_457778(arg3), var_1c, points, &points_1, eax_11)
    points = points_1
    int32_t* edi_1 = &var_1c
    void var_34
    void* esi_3 = &var_34
    *edi_1 = *esi_3
    void* edi_2 = &edi_1[1]
    void* esi_4 = esi_3 + 4
    *edi_2 = *esi_4
    *(edi_2 + 4) = *(esi_4 + 4)
    var_9 = sub_4587f0(arg3, &points)
else
    sub_458afc(arg3)
    char eax_18
    int32_t edx_5
    
    if (arg3[0x25] != 0)
        int32_t esi
        esi.w = 0xffbd
        eax_18, edx_5 = sub_403e64(arg3[0x25], esi, arg2, arg3)
    
    if (arg3[0x25] == 0 || eax_18 != 0)
        eax_18 = 1
    else
        eax_18 = 0
    
    var_9 = eax_18
    
    if (var_9 != 0)
        edx_5.b = 1
        int32_t* eax_20 = sub_454b44(&data_4517f4, edx_5)
        int32_t __saved_ebp
        int32_t* var_48_2 = &__saved_ebp
        int32_t (* var_4c_2)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t* eax_21 = arg3[0x25]
        HWND hWndFrom
        
        if (eax_21 == 0)
            hWndFrom = nullptr
        else
            hWndFrom = sub_45f888(eax_21)
        
        sub_4570f0(arg3, &points)
        
        if (hWndFrom != 0)
            MapWindowPoints(hWndFrom, nullptr, &points, 2)
        
        eax_20[2] = arg2
        eax_20[0x17].b = arg4
        eax_20[0x18] = arg1
        eax_20[0x13] = points
        void* edi_6 = &eax_20[0x14]
        int32_t* esi_7 = &var_1c
        *edi_6 = *esi_7
        void* edi_7 = edi_6 + 4
        void* esi_8 = &esi_7[1]
        *edi_7 = *esi_8
        *(edi_7 + 4) = *(esi_8 + 4)
        MapWindowPoints(nullptr, sub_45f888(arg2), &points, 1)
        int32_t eax_30 = var_1c
        void* esi_10
        esi_10.w = 0xffb5
        sub_403e64(arg2, esi_10, eax_20, points, eax_30)
        fsbase->NtTib.ExceptionList = eax_30
        int32_t var_4c_3 = 0x4587e3
        return sub_403c68(eax_20)
return zx.d(var_9)
