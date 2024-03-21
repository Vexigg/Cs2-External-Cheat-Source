#pragma once
#include <d3d11.h>
#include <dwmapi.h>
#include <windowsx.h>
#include <Windows.h>

namespace gui
{
	// imgui�ؼ�״̬
	inline bool exit = true;
	inline bool menutoggle = true;
	inline bool enableBoxEsp = true;// ����͸��
	inline bool enableBoneEsp = true;// ����͸��
	inline bool enableBodyGlow = false;// ������巢��
	inline bool enableHealth = true;// ���Ѫ��
	inline bool enableAimbot = false;// ������ͷ
	inline bool enableAutoAttack = false;// ������ͷ����ǹ
	inline bool enableRcs = false; // ����������
	inline bool enableRadar = false;// �״�
	inline bool enableFlash = true; // ������
	inline bool enableBhop = false;// ����
	inline int fov = 0;// ��Ұ�Ƕ�
	inline int speed = 0;// ��ǰ�ٶ�
	inline int maxSpeed = 0;// ����ٶ�
	inline bool enableBombPlanted = false; // ը���Ƿ��Ѱ���
	inline int bombTimeLeft = -1; // ը����ը����ʱ
	inline bool enableWeapon = true; // ��ʾ��ҵ�ǰ������

	// win32api window��ر���
	inline HWND overlay = nullptr;
	inline WNDCLASSEXW windowClass = {};

	// directx��ر���
	inline DXGI_SWAP_CHAIN_DESC sd{};
	inline ID3D11Device* device{ nullptr };
	inline ID3D11DeviceContext* device_context{ nullptr };
	inline IDXGISwapChain* swap_chain{ nullptr };
	inline ID3D11RenderTargetView* render_target_view{ nullptr };
	inline D3D_FEATURE_LEVEL level{};

	// ���ڵĴ���������
	void CreateHWindow(
		const char* windowName,
		const char* className,
		HINSTANCE instance,
		INT cmd_show) noexcept;
	void DestroyHWindow() noexcept;

	// directx�豸�Ĵ���������
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// ImGui�Ĵ���������
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}
