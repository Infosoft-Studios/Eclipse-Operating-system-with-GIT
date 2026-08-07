import os
import json
import requests

# ---------- CONFIG: "Store" catalog ----------
# In a real setup this could come from a DB or API.
STORE_CATALOG = [
    {
        "id": "app1",
        "name": "Pixel Icon Pack",
        "description": "Retro-style icon set for desktops.",
        "version": "1.0.0",
        "asset_url": "https://example.com/assets/pixel-icon-pack.zip"
    },
    {
        "id": "app2",
        "name": "Minimal Theme",
        "description": "Clean UI theme for your toolkit.",
        "version": "2.3.1",
        "asset_url": "https://example.com/assets/minimal-theme.zip"
    },
    {
        "id": "app3",
        "name": "Sample Store Logo",
        "description": "Demo logo asset (PNG).",
        "version": "0.9.0",
        "asset_url": "https://example.com/assets/store-logo.png"
    }
]

DOWNLOAD_DIR = "downloads"


# ---------- UTILITIES ----------

def ensure_download_dir():
    if not os.path.exists(DOWNLOAD_DIR):
        os.makedirs(DOWNLOAD_DIR)


def list_apps():
    print("\n=== STORE CATALOG ===")
    for i, app in enumerate(STORE_CATALOG, start=1):
        print(f"{i}. {app['name']} (id: {app['id']}, v{app['version']})")
        print(f"   {app['description']}")
    print()


def get_app_by_id(app_id):
    for app in STORE_CATALOG:
        if app["id"] == app_id:
            return app
    return None


def download_asset(app):
    ensure_download_dir()
    url = app["asset_url"]
    filename = url.split("/")[-1]
    target_path = os.path.join(DOWNLOAD_DIR, filename)

    print(f"\nDownloading '{app['name']}' from:")
    print(f"  {url}")
    print(f"Saving to:")
    print(f"  {target_path}\n")

    try:
        resp = requests.get(url, stream=True, timeout=30)
        resp.raise_for_status()
        with open(target_path, "wb") as f:
            for chunk in resp.iter_content(chunk_size=8192):
                if chunk:
                    f.write(chunk)
        print("✅ Download complete.\n")
    except Exception as e:
        print(f"❌ Download failed: {e}\n")


def show_app_details(app):
    print("\n=== APP DETAILS ===")
    print(json.dumps(app, indent=4))
    print()


# ---------- MAIN LOOP ----------

def main():
    print("Mini Python Store")
    print("-----------------\n")

    while True:
        print("Options:")
        print("  1) List apps")
        print("  2) Show app details")
        print("  3) Download app asset")
        print("  4) Exit\n")

        choice = input("Select option (1-4): ").strip()

        if choice == "1":
            list_apps()

        elif choice == "2":
            app_id = input("Enter app id: ").strip()
            app = get_app_by_id(app_id)
            if app:
                show_app_details(app)
            else:
                print("App not found.\n")

        elif choice == "3":
            app_id = input("Enter app id to download: ").strip()
            app = get_app_by_id(app_id)
            if app:
                download_asset(app)
            else:
                print("App not found.\n")

        elif choice == "4":
            print("Bye.")
            break

        else:
            print("Invalid choice.\n")


if __name__ == "__main__":
    main()
