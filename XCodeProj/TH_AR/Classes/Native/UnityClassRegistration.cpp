extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UNET();
	RegisterModule_UNET();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_ScreenCapture();
	RegisterModule_ScreenCapture();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_TLS();
	RegisterModule_TLS();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterUnityClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; template <> void RegisterUnityClass<GUITexture>(const char*);
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class VisualEffectSubgraphBlock; 
class VisualEffectSubgraphOperator; 
class VisualEffectResource; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 91 non stripped classes
	//0. Camera
	RegisterUnityClass<Camera>("Core");
	//1. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//5. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//6. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//7. GameManager
	RegisterUnityClass<GameManager>("Core");
	//8. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//9. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//10. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//11. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//12. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//13. Renderer
	RegisterUnityClass<Renderer>("Core");
	//14. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//15. Shader
	RegisterUnityClass<Shader>("Core");
	//16. Material
	RegisterUnityClass<Material>("Core");
	//17. Light
	RegisterUnityClass<Light>("Core");
	//18. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//19. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//20. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//21. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//22. Mesh
	RegisterUnityClass<Mesh>("Core");
	//23. Texture
	RegisterUnityClass<Texture>("Core");
	//24. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//25. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//26. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//27. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//28. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//29. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//30. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//31. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//32. GameObject
	RegisterUnityClass<GameObject>("Core");
	//33. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//34. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//35. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//36. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//37. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//38. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//39. Transform
	RegisterUnityClass<Transform>("Core");
	//40. Sprite
	RegisterUnityClass<Sprite>("Core");
	//41. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//42. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//43. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//44. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//45. TextRenderingPrivate::GUIText
	RegisterUnityClass<TextRenderingPrivate::GUIText>("TextRendering");
	//46. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//47. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//48. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//49. Collider
	RegisterUnityClass<Collider>("Physics");
	//50. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//51. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//52. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//53. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//54. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//55. Animator
	RegisterUnityClass<Animator>("Animation");
	//56. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//57. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//58. Animation
	RegisterUnityClass<Animation>("Animation");
	//59. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//60. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//61. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//62. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//63. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//64. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//65. GUITexture
	RegisterUnityClass<GUITexture>("Core");
	//66. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//67. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//68. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//69. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//70. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//71. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//72. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//73. InputManager
	RegisterUnityClass<InputManager>("Core");
	//74. TagManager
	RegisterUnityClass<TagManager>("Core");
	//75. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//76. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//77. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//78. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//79. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//80. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//81. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//82. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//83. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//84. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//85. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//86. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//87. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//88. Motion
	RegisterUnityClass<Motion>("Animation");
	//89. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//90. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");

}
