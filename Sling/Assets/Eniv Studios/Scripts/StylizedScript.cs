using UnityEngine;
using UnityEditor;

namespace EnivStudios
{
    public class StylizedScript : MonoBehaviour
    {
        [SerializeField] private enum state { None,Cat, Dog, Rabbit}
        [SerializeField] private state animals;
        [EnivInspector(nameof(animals), false, state.Cat)][SerializeField] string catName = "Smokey";
        [EnivInspector(nameof(animals), false, state.Cat)][SerializeField] int catSpeed = 3;
        [EnivInspector(nameof(animals), false, state.Dog)][SerializeField] string dogName = "Rambo";
        [EnivInspector(nameof(animals), false, state.Dog)][SerializeField] int dogSpeed = 4;
        [EnivInspector(nameof(animals), false, state.Rabbit)][SerializeField] string rabbitName = "Maggi";
        [EnivInspector(nameof(animals), false, state.Rabbit)][SerializeField] int rabitSpeed = 5;

        [Header("Rotation")]
        [SerializeField] private bool rotateObject;
        [EnivInspector("rotateObject",false)] [SerializeField][Range(1, 10)] private int rotationSpeed;
        [EnivInspector("rotateObject", false)][SerializeField] private Vector2 rotationDirection;

        [Header("Information")]
        [SerializeField] private string yourName;
        [EnivInspector(nameof(yourName), false, "Shubham")][SerializeField] int shubhamAge = 19;
        [EnivInspector(nameof(yourName), false, "Shubham")][SerializeField] bool likesUnity;
        [EnivInspector("likesUnity", false)][SerializeField][TextArea] string description;


        [EnivInspector(nameof(yourName), false, "Akash")][SerializeField] int akashAge = 19;
        [EnivInspector(nameof(yourName), false, "Akash")][SerializeField] bool dontLikeUnity;
        [SerializeField] private enum anotherState { noHobby, Badminton, Hacking }
        [EnivInspector("dontLikeUnity", false)][SerializeField] private anotherState hobbies;
        [EnivInspector(nameof(hobbies), false, anotherState.Badminton)][SerializeField] int playingSince = 2020;
        [EnivInspector(nameof(hobbies), false, anotherState.Badminton)][SerializeField] string favouritePlayer = "Name Doesn't Matter";
        [EnivInspector(nameof(hobbies), false, anotherState.Badminton)][SerializeField][TextArea] string gameDescription;

        [EnivInspector(nameof(hobbies), false, anotherState.Hacking)][SerializeField] int startedAt = 2017;
        [EnivInspector(nameof(hobbies), false, anotherState.Hacking)][SerializeField] string favHackerType = "White Hat";
        [EnivInspector(nameof(hobbies), false, anotherState.Hacking)][SerializeField][Range(1, 10)] int totalExperience = 5; 

    }

    [CustomEditor(typeof(StylizedScript))]
    public class StylizedScriptEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            ShowHeaderLogo(EditorGUIUtility.LoadRequired("Assets/Eniv Studios/Images/EditorImg.png") as Texture);
            EditorGUILayout.Space();
            GUILayout.Label("Stylized Script", EditorStyles.boldLabel);

            EditorGUILayout.BeginVertical(EditorStyles.helpBox);
            EditorGUILayout.LabelField("You can write overview of your script here :)", guiMessageStyle);
            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();

            EditorGUILayout.BeginVertical(EditorStyles.helpBox);

            DrawDefaultInspector();

            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();

        }
        void ShowHeaderLogo(Texture tex)
        {
            var rect = GUILayoutUtility.GetRect(0f, 0f);
            rect.width = tex.width;
            rect.height = tex.height;
            GUILayout.Space(rect.height);
            GUI.DrawTexture(rect, tex);

            var e = Event.current;
            if (e.type != EventType.MouseUp) { return; }
            if (!rect.Contains(e.mousePosition)) { return; }
        }
        GUIStyle guiMessageStyle
        {
            get
            {
                var messageStyle = new GUIStyle(GUI.skin.label);
                messageStyle.wordWrap = true;
                return messageStyle;
            }
        }
    }
}

