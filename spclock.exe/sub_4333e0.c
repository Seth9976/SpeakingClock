// 函数: sub_4333e0
// 地址: 0x4333e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
sub_432ff4(data_4b1b70)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
data_4b1b6c += 1

if (data_4b1b68 == 0)
    data_4b1b68 = LoadLibraryA("uxtheme.dll")
    
    if (data_4b1b68 u> 0)
        data_4b1aa8 = GetProcAddress(data_4b1b68, "OpenThemeData")
        data_4b1aac = GetProcAddress(data_4b1b68, "CloseThemeData")
        data_4b1ab0 = GetProcAddress(data_4b1b68, "DrawThemeBackground")
        data_4b1ab4 = GetProcAddress(data_4b1b68, "DrawThemeText")
        data_4b1ab8 = GetProcAddress(data_4b1b68, "GetThemeBackgroundContentRect")
        data_4b1abc = GetProcAddress(data_4b1b68, "GetThemeBackgroundContentRect")
        data_4b1ac0 = GetProcAddress(data_4b1b68, "GetThemePartSize")
        data_4b1ac4 = GetProcAddress(data_4b1b68, "GetThemeTextExtent")
        data_4b1ac8 = GetProcAddress(data_4b1b68, "GetThemeTextMetrics")
        data_4b1acc = GetProcAddress(data_4b1b68, "GetThemeBackgroundRegion")
        data_4b1ad0 = GetProcAddress(data_4b1b68, "HitTestThemeBackground")
        data_4b1ad4 = GetProcAddress(data_4b1b68, "DrawThemeEdge")
        data_4b1ad8 = GetProcAddress(data_4b1b68, "DrawThemeIcon")
        data_4b1adc = GetProcAddress(data_4b1b68, "IsThemePartDefined")
        data_4b1ae0 = GetProcAddress(data_4b1b68, "IsThemeBackgroundPartiallyTransparent")
        data_4b1ae4 = GetProcAddress(data_4b1b68, "GetThemeColor")
        data_4b1ae8 = GetProcAddress(data_4b1b68, "GetThemeMetric")
        data_4b1aec = GetProcAddress(data_4b1b68, "GetThemeString")
        data_4b1af0 = GetProcAddress(data_4b1b68, "GetThemeBool")
        data_4b1af4 = GetProcAddress(data_4b1b68, "GetThemeInt")
        data_4b1af8 = GetProcAddress(data_4b1b68, "GetThemeEnumValue")
        data_4b1afc = GetProcAddress(data_4b1b68, "GetThemePosition")
        data_4b1b00 = GetProcAddress(data_4b1b68, "GetThemeFont")
        data_4b1b04 = GetProcAddress(data_4b1b68, "GetThemeRect")
        data_4b1b08 = GetProcAddress(data_4b1b68, "GetThemeMargins")
        data_4b1b0c = GetProcAddress(data_4b1b68, "GetThemeIntList")
        data_4b1b10 = GetProcAddress(data_4b1b68, "GetThemePropertyOrigin")
        data_4b1b14 = GetProcAddress(data_4b1b68, "SetWindowTheme")
        data_4b1b18 = GetProcAddress(data_4b1b68, "GetThemeFilename")
        data_4b1b1c = GetProcAddress(data_4b1b68, "GetThemeSysColor")
        data_4b1b20 = GetProcAddress(data_4b1b68, "GetThemeSysColorBrush")
        data_4b1b24 = GetProcAddress(data_4b1b68, "GetThemeSysBool")
        data_4b1b28 = GetProcAddress(data_4b1b68, "GetThemeSysSize")
        data_4b1b2c = GetProcAddress(data_4b1b68, "GetThemeSysFont")
        data_4b1b30 = GetProcAddress(data_4b1b68, "GetThemeSysString")
        data_4b1b34 = GetProcAddress(data_4b1b68, "GetThemeSysInt")
        data_4b1b38 = GetProcAddress(data_4b1b68, "IsThemeActive")
        data_4b1b3c = GetProcAddress(data_4b1b68, "IsAppThemed")
        data_4b1b40 = GetProcAddress(data_4b1b68, "GetWindowTheme")
        data_4b1b44 = GetProcAddress(data_4b1b68, "EnableThemeDialogTexture")
        data_4b1b48 = GetProcAddress(data_4b1b68, "IsThemeDialogTextureEnabled")
        data_4b1b4c = GetProcAddress(data_4b1b68, "GetThemeAppProperties")
        data_4b1b50 = GetProcAddress(data_4b1b68, "SetThemeAppProperties")
        data_4b1b54 = GetProcAddress(data_4b1b68, "GetCurrentThemeName")
        data_4b1b58 = GetProcAddress(data_4b1b68, "GetThemeDocumentationProperty")
        data_4b1b5c = GetProcAddress(data_4b1b68, "DrawThemeParentBackground")
        data_4b1b60 = GetProcAddress(data_4b1b68, "EnableTheming")

var_8:3.b = data_4b1b68 u> 0
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_43379a
return sub_432ffc(data_4b1b70)
